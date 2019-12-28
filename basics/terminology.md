# Terminology

* [Anweisung](#anweisung)
* [Funktionen alias Methoden](#funktionen-alias-methoden)
* [Variablen](#variablen)
* [Operatoren](#operatoren)

## Anweisung

Ein Programm ist eine Sammlung von vielen verschiedenen Anweisungen. Eine
_Anweisung_ endet immer mit einem Semikolon.

```c
a = 40 + 2;
```

## Funktionen alias Methoden

Um das Programm zu strukturieren, benutzen wir _Methoden_. Wenn diese _Methoden_
teil eines Objektes sind, ist es eine _Funktion_. Dabei kann der zurück gegebene
Wert auch direkt in einer weiteren Rechnung verwendet werden oder bspw. in eine
Variable abgelegt werden.

```c
int quadrat(int n, int m) {
    return n * m;
}
```

#### Methodenaufruf

```c
int p = quadrat(2, 4);
//      ^^^^^^^^^^^^^
```

#### Funktionsaufruf

```c
int q = objectName.methodenName(5, "text");
//                ^^^^^^^^^^^^^^^^^^^^^^^^
```

_Methoden_ und _Funktionen_ können um parameter erweitert werden. Dabei
'entscheidet' die Funktion, ob der Parameter als _Wert_ oder _Referenz_
übergeben werden soll.

#### Parameter

```c
int quadrat(int n, int m) {
    //      ^^^^^  ^^^^^
    return n * m;
}
```

```c
int p = quadrat(2, 4);
//              ^^^^
```

#### Rückgabewert

Der _Rückgabewert_ der `quadrat` Methode is das Ergebnis von `n * m`. Dieser Wert
kann als unabhängige Kopie oder als eine Referenz zurück gegeben werden.

```c
int quadrat(int n, int m) {
    int quad = n * m;
    return quad;
//  ^^^^^^^^^^^
}
```

## Variablen

Eine _Variable_ speichert einen Wert oder eine Referenz auf einen Wert im Speicher
zeigt.

#### Deklaration

Hiermit wird eine Variable im Programm bekannt gemacht, aber ihr wird nicht
direkt ein Wert zugewiesen.

```c
int zahl;
```

#### Initialisierung (mit Zuweisung)

```c
int zahl = 10;
int wert { 20 };  // Seit C++11
```

Variablen können aber auch mit `auto` initialisiert werden, dann sucht sich der
Compiler den passenen Typ selbst. Nach der Zuweisung ist der Typ dan fest und
die Zuweisung eines anderen Datentyps ist ein Fehler.

```c
auto wert { 20 };
// wert = "Hallo Welt"; -> Fehler!
```

## Operatoren

#### Bitweise Arithmetik

```c
|, &, ^, ~, <<, >>
```

#### Arithmetische Operatoren

```c
+, -, /, *, % (modolo)
```

#### Zusammengesetzte Zuweisung

```c
+=, -=, /=, *=, %=, >>=, <<=, &=, ^=, |=
```

#### Relationale Operatoren

```c
==, <=, >=, <, >
```

#### Inkement/ Dekrement

Bei dieser Schreibweise ist es wichtig, ob das `--|++` vor oder nach dem Wert
kommt. Wenn es davor steht, wird die Variable erst neu gesetzt und dann
weiterverwendet.

```c
++, --
```

#### Logische Operatoren

Logische Operatoren können mit `!` oder `not` verknüpft werden.

```c
&&, ||
```

--------------------------------------------------------------------------------

_2019-12-28_

