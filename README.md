# string – String-/Pfad-Helfer und Terminal-Helfer

C-Helferbibliothek für gebundene String-Operationen, Pfadhandling und
einfache Terminal-Ansteuerung (ANSI).

## Umfang

- **String**: `string_copy` / `string_cat` mit Größenkontrolle
  (Buffer-Größe als Parameter; Längenlimit `STRING_MAXLEN` = 4096)
- **Pfade**: `string_dirname_from_filepath`, `string_get_exe_path`,
  `string_directory_exists`/`_create`, `string_filepath_exist`,
  `string_append_directory_to_path_and_create`
- **Substring**: `string_calculate_substring_index`
- **Terminal**: `string_set_cursor_position`, `string_clear_screen`
- **Farben**: ANSI-Escape-Makros (Vorder-/Hintergrund, hell) –
  `COLOR_*`, `BG_*`, `COLOR_RESET`

## Nutzung

```c
#include <string/string.h>

string_t buf;
string_copy(buf, sizeof(buf), "hallo");
string_cat(buf, sizeof(buf), " welt");
```

## Abhängigkeiten

Keine weiteren Projekte-Bibliotheken.

## Build

```bash
cmake -S . -B build
cmake --build build
```

In ein Projekt einbinden: `add_subdirectory(../../libraries/string …)`,
Einbindung des Headers über den Include-Pfad `<string/string.h>`.