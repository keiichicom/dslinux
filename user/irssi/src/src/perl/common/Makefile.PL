use ExtUtils::MakeMaker;

WriteMakefile('NAME' => 'Irssi',
              'LIBS' => '',
	      'OBJECT' => '$(O_FILES)',
              'INC' => '-I../../.. -I../../.. -I../../../src -I../../../src/core ',
	      'VERSION_FROM' => './Irssi.pm');
