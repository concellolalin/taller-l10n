# Programa de exemplo empregando gettext

## Compilación ficheiro C

```bash
$ gcc programa.c -o programa
```

## Compilación ficheiro po

```bash
$ msgfmt programa.po -o programa.mo
```

Despois copiar o ficheiro programa.mo ao directorio de locales

```bash
$ sudo cp programa.mo /usr/share/locale/gl/LC_MESSAGES/
```

## Execución

```bash
$ ./programa Manolo
```

Executar forzando idioma

```bash
$ LANGUAGE=gl
$ ./programa Manolo
$ LANGUAGE=en
$ ./programa Manolo
```