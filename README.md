% AirWatcher(1) Version 1.0 | "AirWatcher" Documentation

NAME
====

**airwatcher** — air quality analyzer.

SYNOPSIS
========

	./airwatcher

DESCRIPTION
===========

AirWatcher is an air quality monitor that permits analyse the quality of air.

Menu
-------

<!-- * option **1**

	Ne prend pas en compte les fichiers de type images, css et javascript.

* -t heure

	Ne prend en compte que les cibles comprisent dans l'intervalle horaire \[t, t+1\[.

* -g file

	Permet de produire un fichier contenant une description du fichier log en DOT.

* -u addr

	Permet de renseigner l'adresse de base des différentes cibles. Par défaut celle-ci est *http://intranet-if.insa-lyon.fr*. -->

HowTo
-----

From the root directory of the application,

to compile :

	make

to run :

	./airwatcher

FILES
=====

* *airwatcher*

	binary executable

* *specifications/*

	Software requirements specification repository

* *planning/*

	Planning repository

	* *html/*

		HTML output files repository

	* *src/*

		Taskjuggler source files repository

* *app/*

	Application repository

	* *src/*

		C++ source files repository

	* *bin/*

		Binairy files repository

	* *test/*

		Test repository

ENVIRONMENT
===========

command line environment

BUGS
====

Check out <https://gitlab.insa-lyon.fr/b3204-b3205/airwatcher/-/issues>

AUTHORS
=======

* Adrien Jaillet <adrien.jailler@insa-lyon.fr>
* William Jean <william.jean@insa-lyon.fr>
* Matheus de Barros Silva <matheus.de-barros-silva@insa-lyon.fr>
* Jade Prevôt <jade.prevot@insa-lyon.fr>
* Brandon Alves <brandon.da-silva-alves@insa-lyon.fr>

SEE ALSO
========

