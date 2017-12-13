#!/usr/bin/perl -w

use strict;

if (scalar @ARGV < 3)
{

    print "Usage : gmin.pl SIZE DENSITY NB_OF_ANTS\nWhere size is the number of rooms and density the probability of connexions between rooms\n";
    exit -1;
}

my $i = 0;
my $j = 0;

my $size = shift @ARGV;
my $density = int(shift @ARGV);
my $nb = int(shift @ARGV);

my $home = int(rand($size));
my $end  = int(rand($size));
while ($end == $home)
{
    my $end  = int(rand($size));
}

print $nb . "\n";
while ($i < $size)
{
    print "##start\n" if ($i == $home);
    print "##end\n" if ($i == $end);
    print $i;
    print " " . int(rand(10 * $size));
    print " " . int(rand(10 * $size));
    print "\n";
    $i++;
}

$i = 0;

while ($i < $size)
{
    $j = 0;
    while ($j < $size)
    {
	if ($density > int(rand(100)))
	{
	    print $i . "-" . $j . "\n";
	}
	$j++;
    }
    $i++;
}
