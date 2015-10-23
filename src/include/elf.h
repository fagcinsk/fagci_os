#ifndef __ELF_H
#define __ELF_H

#include <stddef.h>
#include <stdint.h>
#include "multiboot.h"

#define ELF32_ST_TYPE(i) ((i)&0xf)

typedef struct {
  uint32_t name;
  uint32_t type;
  uint32_t flags;
  uint32_t addr;
  uint32_t offset;
  uint32_t size;
  uint32_t link;
  uint32_t info;
  uint32_t addralign;
  uint32_t entsize;
} __attribute__((packed)) elf_section_header_t;
  
typedef struct {
  uint32_t name;
  uint32_t value;
  uint32_t size;
  uint8_t  info;
  uint8_t  other;
  uint16_t shndx;
} __attribute__((packed)) elf_symbol_t;

typedef struct {
  elf_symbol_t *symtab;
  uint32_t      symtabsz;
  const char   *strtab;
  uint32_t      strtabsz;
} elf_t;

// Looks up a symbol by address.
const char *elf_lookup_symbol(uint32_t addr, elf_t *elf);

#endif
