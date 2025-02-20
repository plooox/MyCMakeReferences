# Adding Generator Expressions (1 ~ 4)
## Generator Expression
- Evaluated expression during build system generation to produce information specific to each build configuration
- Used to enable conditional linking, conditional defenitions when compiling
    - Based on build configuration, target properties, platform information, queryable information
- `$<BOOL:string>`
    - `$<0:...>`: Generate the empty string
    - `$<1:...>`: Generate the content of `...`