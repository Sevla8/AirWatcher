% AirWatcher(1) Version 1.0 | "AirWatcher" Documentation

NAME
====

**airwatcher** — air quality analyzer.

SYNOPSIS
========

	./AirWatcher

Checkout `app/README.md` for further information.

DESCRIPTION
===========

AirWatcher is an air quality monitor that permits analyse the quality of air.

Menu
-------

FILES
=====

```
📦AirWatcher
 ┣ 📂app
 ┃ ┣ 📂src
 ┃ ┃ ┣ 📂control
 ┃ ┃ ┃ ┣ 📜Controller.cpp
 ┃ ┃ ┃ ┗ 📜Controller.h
 ┃ ┃ ┣ 📂factory
 ┃ ┃ ┃ ┣ 📜Reader.cpp
 ┃ ┃ ┃ ┗ 📜Reader.h
 ┃ ┃ ┣ 📂model
 ┃ ┃ ┃ ┣ 📜Attribute.cpp
 ┃ ┃ ┃ ┣ 📜Attribute.h
 ┃ ┃ ┃ ┣ 📜Cleaner.cpp
 ┃ ┃ ┃ ┣ 📜Cleaner.h
 ┃ ┃ ┃ ┣ 📜Date.cpp
 ┃ ┃ ┃ ┣ 📜Date.h
 ┃ ┃ ┃ ┣ 📜GovernmentAgency.cpp
 ┃ ┃ ┃ ┣ 📜GovernmentAgency.h
 ┃ ┃ ┃ ┣ 📜Measurement.cpp
 ┃ ┃ ┃ ┣ 📜Measurement.h
 ┃ ┃ ┃ ┣ 📜Model.cpp
 ┃ ┃ ┃ ┣ 📜Model.h
 ┃ ┃ ┃ ┣ 📜PrivateUser.cpp
 ┃ ┃ ┃ ┣ 📜PrivateUser.h
 ┃ ┃ ┃ ┣ 📜Provider.cpp
 ┃ ┃ ┃ ┣ 📜Provider.h
 ┃ ┃ ┃ ┣ 📜Sensor.cpp
 ┃ ┃ ┃ ┣ 📜Sensor.h
 ┃ ┃ ┃ ┣ 📜User.cpp
 ┃ ┃ ┃ ┗ 📜User.h
 ┃ ┃ ┣ 📂ui
 ┃ ┃ ┃ ┣ 📜UserInterface.cpp
 ┃ ┃ ┃ ┗ 📜UserInterface.h
 ┃ ┃ ┗ 📜main.cpp
 ┃ ┣ 📂test
 ┃ ┃ ┣ 📜AttributeTest.cpp
 ┃ ┃ ┣ 📜AttributeTest.h
 ┃ ┃ ┣ 📜CleanerTest.cpp
 ┃ ┃ ┣ 📜CleanerTest.h
 ┃ ┃ ┣ 📜ControllerTest.cpp
 ┃ ┃ ┣ 📜ControllerTest.h
 ┃ ┃ ┣ 📜DateTest.cpp
 ┃ ┃ ┣ 📜DateTest.h
 ┃ ┃ ┣ 📜MeasurementTest.cpp
 ┃ ┃ ┣ 📜MeasurementTest.h
 ┃ ┃ ┣ 📜PrivateUserTest.cpp
 ┃ ┃ ┣ 📜PrivateUserTest.h
 ┃ ┃ ┣ 📜ProviderTest.cpp
 ┃ ┃ ┣ 📜ProviderTest.h
 ┃ ┃ ┣ 📜ReaderTest.cpp
 ┃ ┃ ┣ 📜ReaderTest.h
 ┃ ┃ ┣ 📜SensorTest.cpp
 ┃ ┃ ┣ 📜SensorTest.h
 ┃ ┃ ┗ 📜main.cpp
 ┃ ┣ 📜.gitignore
 ┃ ┣ 📜CMakeLists.txt
 ┃ ┗ 📜README.md
 ┣ 📂conception
 ┃ ┣ 📜AirWatcher.mdj
 ┃ ┣ 📜ClassDiagram.png
 ┃ ┣ 📜SequenceDiagram1.png
 ┃ ┣ 📜SequenceDiagram2.png
 ┃ ┗ 📜SequenceDiagram3.png
 ┣ 📂dataset
 ┃ ┣ 📂tests
 ┃ ┃ ┣ 📜attributes.csv
 ┃ ┃ ┣ 📜cleaners.csv
 ┃ ┃ ┣ 📜dataToTestSensorRanked.csv
 ┃ ┃ ┣ 📜fichierVide.csv
 ┃ ┃ ┣ 📜measurements.csv
 ┃ ┃ ┣ 📜measurements1.csv
 ┃ ┃ ┣ 📜providers.csv
 ┃ ┃ ┣ 📜sensorRanked.csv
 ┃ ┃ ┣ 📜sensors.csv
 ┃ ┃ ┣ 📜sensors1.csv
 ┃ ┃ ┗ 📜users.csv
 ┃ ┣ 📜Description.pdf
 ┃ ┣ 📜attributes.csv
 ┃ ┣ 📜cleaners.csv
 ┃ ┣ 📜measurements.csv
 ┃ ┣ 📜providers.csv
 ┃ ┣ 📜sensors.csv
 ┃ ┗ 📜users.csv
 ┣ 📂planning
 ┃ ┣ 📂html
 ┃ ┣ 📂src
 ┃ ┃ ┣ 📜account.tji
 ┃ ┃ ┣ 📜macro.tji
 ┃ ┃ ┣ 📜main.tjp
 ┃ ┃ ┣ 📜resource.tji
 ┃ ┃ ┣ 📜task.tji
 ┃ ┃ ┗ 📜view.tji
 ┃ ┣ 📜.gitignore
 ┃ ┣ 📜Makefile
 ┃ ┣ 📜README.md
 ┃ ┣ 📜init.pdf
 ┃ ┗ 📜init.tex
 ┣ 📂specifications
 ┃ ┣ 📜.gitignore
 ┃ ┣ 📜Project.pdf
 ┃ ┣ 📜Specification_AirWatcher.pdf
 ┃ ┣ 📜gui-1.png
 ┃ ┣ 📜gui-2.png
 ┃ ┣ 📜gui-3.png
 ┃ ┣ 📜srs.bib
 ┃ ┣ 📜srs.tex
 ┃ ┗ 📜uc.pdf
 ┣ 📜.editorconfig
 ┣ 📜.gitignore
 ┗ 📜README.md
```

ENVIRONMENT
===========

command line environment

BUGS
====

Check out <https://gitlab.insa-lyon.fr/b3204-b3205/airwatcher/-/issues>

AUTHORS
=======

* Adrien Jaillet <adrien.jaillet@insa-lyon.fr>
* William Jean <william.jean@insa-lyon.fr>
* Matheus de Barros Silva <matheus.de-barros-silva@insa-lyon.fr>
* Jade Prevôt <jade.prevot@insa-lyon.fr>
* Brandon Alves <brandon.da-silva-alves@insa-lyon.fr>

SEE ALSO
========

