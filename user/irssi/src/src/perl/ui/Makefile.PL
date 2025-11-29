use ExtUtils::MakeMaker;

WriteMakefile('NAME' => 'Irssi::UI',
              'LIBS' => '',
	      'OBJECT' => '$(O_FILES)',
              'TYPEMAPS' => ['../common/typemap'],
              'INC' => '-I../../.. -I../../../src -I../../../src/core -I../../../src/fe-common/core ',
	      'VERSION_FROM' => './UI.pm');
