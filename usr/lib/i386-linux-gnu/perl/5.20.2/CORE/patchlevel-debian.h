	,"DEBPKG:debian/cpan_definstalldirs - Provide a sensible INSTALLDIRS default for modules installed from CPAN."
	,"DEBPKG:debian/db_file_ver - http://bugs.debian.org/340047 Remove overly restrictive DB_File version check."
	,"DEBPKG:debian/doc_info - Replace generic man(1) instructions with Debian-specific information."
	,"DEBPKG:debian/enc2xs_inc - http://bugs.debian.org/290336 Tweak enc2xs to follow symlinks and ignore missing @INC directories."
	,"DEBPKG:debian/errno_ver - http://bugs.debian.org/343351 Remove Errno version check due to upgrade problems with long-running processes."
	,"DEBPKG:debian/libperl_embed_doc - http://bugs.debian.org/186778 Note that libperl-dev package is required for embedded linking"
	,"DEBPKG:fixes/respect_umask - Respect umask during installation"
	,"DEBPKG:debian/writable_site_dirs - Set umask approproately for site install directories"
	,"DEBPKG:debian/extutils_set_libperl_path - EU:MM: set location of libperl.a under /usr/lib"
	,"DEBPKG:debian/no_packlist_perllocal - Don't install .packlist or perllocal.pod for perl or vendor"
	,"DEBPKG:debian/prefix_changes - Fiddle with *PREFIX and variables written to the makefile"
	,"DEBPKG:debian/fakeroot - Postpone LD_LIBRARY_PATH evaluation to the binary targets."
	,"DEBPKG:debian/instmodsh_doc - Debian policy doesn't install .packlist files for core or vendor."
	,"DEBPKG:debian/ld_run_path - Remove standard libs from LD_RUN_PATH as per Debian policy."
	,"DEBPKG:debian/libnet_config_path - Set location of libnet.cfg to /etc/perl/Net as /usr may not be writable."
	,"DEBPKG:debian/mod_paths - Tweak @INC ordering for Debian"
	,"DEBPKG:debian/module_build_man_extensions - http://bugs.debian.org/479460 Adjust Module::Build manual page extensions for the Debian Perl policy"
	,"DEBPKG:debian/prune_libs - http://bugs.debian.org/128355 Prune the list of libraries wanted to what we actually need."
	,"DEBPKG:fixes/net_smtp_docs - [rt.cpan.org #36038] http://bugs.debian.org/100195 Document the Net::SMTP 'Port' option"
	,"DEBPKG:debian/perlivp - http://bugs.debian.org/510895 Make perlivp skip include directories in /usr/local"
	,"DEBPKG:debian/deprecate-with-apt - http://bugs.debian.org/747628 Point users to Debian packages of deprecated core modules"
	,"DEBPKG:debian/squelch-locale-warnings - http://bugs.debian.org/508764 Squelch locale warnings in Debian package maintainer scripts"
	,"DEBPKG:debian/skip-upstream-git-tests - Skip tests specific to the upstream Git repository"
	,"DEBPKG:debian/patchlevel - http://bugs.debian.org/567489 List packaged patches for 5.20.2-3+deb8u7 in patchlevel.h"
	,"DEBPKG:debian/skip-kfreebsd-crash - http://bugs.debian.org/628493 [perl #96272] Skip a crashing test case in t/op/threads.t on GNU/kFreeBSD"
	,"DEBPKG:fixes/document_makemaker_ccflags - http://bugs.debian.org/628522 [rt.cpan.org #68613] Document that CCFLAGS should include $Config{ccflags}"
	,"DEBPKG:debian/find_html2text - http://bugs.debian.org/640479 Configure CPAN::Distribution with correct name of html2text"
	,"DEBPKG:debian/perl5db-x-terminal-emulator.patch - http://bugs.debian.org/668490 Invoke x-terminal-emulator rather than xterm in perl5db.pl"
	,"DEBPKG:debian/cpan-missing-site-dirs - http://bugs.debian.org/688842 Fix CPAN::FirstTime defaults with nonexisting site dirs if a parent is writable"
	,"DEBPKG:fixes/memoize_storable_nstore - [rt.cpan.org #77790] http://bugs.debian.org/587650 Memoize::Storable: respect 'nstore' option not respected"
	,"DEBPKG:debian/regen-skip - Skip a regeneration check in unrelated git repositories"
	,"DEBPKG:fixes/regcomp-mips-optim - [perl #122817] http://bugs.debian.org/754054 Downgrade the optimization of regcomp.c on mips and mipsel due to a gcc-4.9 bug"
	,"DEBPKG:debian/makemaker-pasthru - http://bugs.debian.org/758471 Pass LD settings through to subdirectories"
	,"DEBPKG:fixes/perldoc-less-R - [rt.cpan.org #98636] http://bugs.debian.org/758689 Tell the 'less' pager to allow terminal escape sequences"
	,"DEBPKG:fixes/pod_man_reproducible_date - http://bugs.debian.org/759405 Support POD_MAN_DATE in Pod::Man for the left-hand footer"
	,"DEBPKG:fixes/io_uncompress_gunzip_inmemory - http://bugs.debian.org/747363 [rt.cpan.org #95494] Fix gunzip to in-memory file handle"
	,"DEBPKG:fixes/socket_test_recv_fix - http://bugs.debian.org/758718 [perl #122657] Compare recv return value to peername in socket test"
	,"DEBPKG:fixes/hurd_socket_recv_todo - http://bugs.debian.org/758718 [perl #122657] TODO checking the result of recv() on hurd"
	,"DEBPKG:fixes/regexp-performance - [0fa70a0] http://bugs.debian.org/777556 [perl #123743] simpify and speed up /.*.../ handling"
	,"DEBPKG:fixes/failed_require_diagnostics - http://bugs.debian.org/781120 [perl #123270] Report inaccesible file on failed require"
	,"DEBPKG:fixes/array-cloning - http://bugs.debian.org/779357 [perl #124127] [902d169] fix cloning arrays with unused elements"
	,"DEBPKG:fixes/perldb-threads - http://bugs.debian.org/779357 [perl #124127] [41ef2c6] lib/perl5db.pl: Restore noop lock prototype"
	,"DEBPKG:fixes/CVE-2015-8607_file_spec_taint_fix - ensure File::Spec::canonpath() preserves taint"
	,"DEBPKG:fixes/encode-unicode-bom - http://bugs.debian.org/798727 [rt.cpan.org #107043] Address https://rt.cpan.org/Public/Bug/Display.html?id=107043"
	,"DEBPKG:debian/encode-unicode-bom-doc - http://bugs.debian.org/798727 Document Debian backport of Encode::Unicode fix"
	,"DEBPKG:debian/kfreebsd-softupdates - http://bugs.debian.org/796798 Work around Debian Bug#796798"
	,"DEBPKG:fixes/CVE-2016-2381_duplicate_env - remove duplicate environment variables from environ"
	,"DEBPKG:debian/debugperl-compat-fix - [perl #127212] http://bugs.debian.org/810326 Disable PERL_TRACK_MEMPOOL for debugging builds"
	,"DEBPKG:fixes/CVE-2015-8853_regexp_hang - http://bugs.debian.org/821848 [perl #123562] PATCH [perl #123562] Regexp-matching \"hangs\""
	,"DEBPKG:fixes/utf8_regexp_crash - http://bugs.debian.org/820328 [perl #124109] save_re_context(): do \"local $n\" with no PL_curpm"
	,"DEBPKG:fixes/regcomp_whitespace_fix - http://bugs.debian.org/820328 [perl #124109] Perl_save_re_context(): re-indent after last commit"
	,"DEBPKG:fixes/5.20.3/eval_label_crash - http://bugs.debian.org/822336 [perl #123652] eval {label:} crash"
	,"DEBPKG:fixes/5.20.3/preserve_record_separator - http://bugs.debian.org/822336 [perl #123218] \"preserve\" $/ if set to a bad value"
	,"DEBPKG:fixes/5.20.3/test_count_base_rs - http://bugs.debian.org/822336 Fix test count in t/base/rs.t"
	,"DEBPKG:fixes/5.20.3/remove_get_magic - http://bugs.debian.org/822336 [perl #123739] Remove get-magic from $/"
	,"DEBPKG:fixes/5.20.3/speed_up_scalar_g - http://bugs.debian.org/822336 [perl #123202] speed up scalar //g against tainted strings"
	,"DEBPKG:fixes/5.20.3/accidental_all_features - http://bugs.debian.org/822336 Stop $^H |= 0x1c020000 from enabling all features"
	,"DEBPKG:fixes/5.20.3/multidimensional_arrays_utf8 - http://bugs.debian.org/822336 [perl #124113] Make check for multi-dimensional arrays be UTF8-aware"
	,"DEBPKG:fixes/5.20.3/unquoted_utf8_heredoc_terminators - http://bugs.debian.org/822336 Allow unquoted UTF-8 HERE-document terminators"
	,"DEBPKG:fixes/5.20.3/parentheses_ambiguous_warning_utf8_functions - http://bugs.debian.org/822336 Fix \"...without parentheses is ambuguous\" warning for UTF-8 function names"
	,"DEBPKG:fixes/5.20.3/leak_namepv_copy - http://bugs.debian.org/822336 [perl #123786] don't leak the temp utf8 copy of namepv"
	,"DEBPKG:fixes/5.20.3/h2ph_hex_constants - http://bugs.debian.org/822336 h2ph: correct handling of hex constants for the preamble"
	,"DEBPKG:fixes/5.20.3/leftbracket_XTERMORDORDOR - http://bugs.debian.org/822336 [perl #123711] Fix crash with 0-5x-l{0}"
	,"DEBPKG:fixes/5.20.3/fatalize_warnings_unwinding - http://bugs.debian.org/822336 [perl #123398] don't fatalize warnings during unwinding (#123398)"
	,"DEBPKG:fixes/5.20.3/setpgrp - http://bugs.debian.org/822336 =?UTF-8?q?Don=E2=80=99t=20treat=20setpgrp($nonzero)=20as=20setpgr?= =?UTF-8?q?p(1)?="
	,"DEBPKG:fixes/5.20.3/death_unwinding_crash - http://bugs.debian.org/822336 [perl #124156] RT #124156: death during unwinding causes crash"
	,"DEBPKG:fixes/5.20.3/stashpvn_crash - http://bugs.debian.org/822336 [perl #125541] Fix crash with %::=(); J->${\\\"::\"}"
	,"DEBPKG:fixes/5.20.3/possessive_quantifier - http://bugs.debian.org/822336 [perl #125825] PATCH: [perl 125825] {n}+ possessive quantifier broken"
	,"DEBPKG:fixes/5.20.3/quoted_code_crash - http://bugs.debian.org/822336 [perl #123712] Fix /$a[/ parsing"
	,"DEBPKG:fixes/5.20.3/checking_sub_inwhat - http://bugs.debian.org/822336 [perl #123712] Don't check sub_inwhat"
	,"DEBPKG:fixes/5.20.3/yylex_loop - http://bugs.debian.org/822336 Fix hang with \"@{\""
	,"DEBPKG:fixes/5.20.3/docs/op - http://bugs.debian.org/822336 Fix apidocs for OP_TYPE_IS(_OR_WAS) - arguments separated by |, not ,."
	,"DEBPKG:fixes/5.20.3/docs/encoding - http://bugs.debian.org/822336 perlpodspec: Corrections/adds to detecting =encoding"
	,"DEBPKG:fixes/5.20.3/docs/SvPV_set - http://bugs.debian.org/822336 improve SvPV_set's docs, it really shouldn't be public API"
	,"DEBPKG:fixes/5.20.3/docs/autodie - http://bugs.debian.org/822336 Fix warning message regarding \"use autodie\" and \"use open\"."
	,"DEBPKG:fixes/5.20.3/docs/autodie_2_26 - http://bugs.debian.org/822336 perlunicook: Note that autodie >= 2.26 should be okay with \"use open\"."
	,"DEBPKG:fixes/5.20.3/docs/setenv - http://bugs.debian.org/822336 Fix setenv() replacement documentation in perlclib"
	,"DEBPKG:fixes/5.20.3/docs/clib_caution - http://bugs.debian.org/822336 perlhacktips: Add caution about clib ptr returns to static memory"
	,"DEBPKG:fixes/5.20.3/docs/perlunicook_typos - http://bugs.debian.org/822336 Fix minor code typos in perlunicook"
	,"DEBPKG:fixes/5.20.3/docs/ook_example - http://bugs.debian.org/822336 [perl #122322] Update OOK example in perlguts"
	,"DEBPKG:fixes/5.20.3/docs/study_noop - http://bugs.debian.org/822336 perlfunc: mention that study() is currently a noop"
	,"DEBPKG:fixes/CVE-2016-1238/remove-dot-when-loading - [perl #127834] (perl #127834) remove . from the end of @INC if complex modules are loaded"
	,"DEBPKG:fixes/CVE-2016-1238/remove-dot-in-padwalker - [perl #127834] perl5db.pl: ensure PadWalker is loaded from standard paths"
	,"DEBPKG:fixes/CVE-2016-1238/remove-dot-in-dist - [perl #127834] dist/: remove . from @INC when loading optional modules"
	,"DEBPKG:fixes/CVE-2016-1238/remove-dot-in-cpan - [perl #127834] cpan/: remove . from @INC when loading optional modules"
	,"DEBPKG:fixes/CVE-2016-1238/customized-encode - Update customized.dat for cpan/Encode/Encode.pm"
	,"DEBPKG:debian/CVE-2016-1238/test-suite-without-dot - [perl #127810] Patch unit tests to explicitly insert \".\" into @INC when needed."
	,"DEBPKG:debian/CVE-2016-1238/eumm-without-dot - [perl #127810] Add PERL_USE_UNSAFE_INC support to EU::MM for fortify_inc support."
	,"DEBPKG:debian/CVE-2016-1238/cpan-without-dot - [perl #127810] Set PERL_USE_UNSAFE_INC for cpan usage"
	,"DEBPKG:debian/CVE-2016-1238/mb-without-dot - Make Module::Build set PERL_USE_UNSAFE_INC"
	,"DEBPKG:debian/CVE-2016-1238/sitecustomize-in-etc - Look for sitecustomize.pl in /etc/perl rather than sitelib on Debian systems"
	,"DEBPKG:fixes/xsloader-eval - [rt.cpan.org #115808] http://bugs.debian.org/829578 =?UTF-8?q?Don=E2=80=99t=20let=20XSLoader=20load=20relative=20path?= =?UTF-8?q?s?="
	,"DEBPKG:fixes/file_path_chmod_race - http://bugs.debian.org/863870 [rt.cpan.org #121951] Prevent directory chmod race attack."
	,"DEBPKG:fixes/extutils_file_path_compat - [PATCH] Correct the order of tests of chmod(). (#294)"
	,"DEBPKG:debian/customized_file_path - Update customized.dat for File-Path changes"
