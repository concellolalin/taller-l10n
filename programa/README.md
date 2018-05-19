# Programa de exemplo empregando gettext

## Compilación ficheiro C

$ gcc programa.c -o programa

## Compilación ficheiro po

$ msgfmt programa.po -o programa.mo

Despois copiar o ficheiro programa.mo ao directorio de locales

$ sudo cp programa.mo /usr/share/locale/gl/LC_MESSAGES/

## Execución

$ ./programa Manolo

Executar forzando idioma

$ LANGUAGE=gl
$ ./programa Manolo
$ LANGUAGE=en
$ ./programa Manolo