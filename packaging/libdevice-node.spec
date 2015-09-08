Name:       libdevice-node
Summary:    Library to control OAL APIs
Version:    0.1.0
Release:    6
Group:      System/Libraries
License:    Apache-2.0
Source0:    %{name}-%{version}.tar.gz
Source1:    %{name}.manifest
BuildRequires:  cmake
BuildRequires:  pkgconfig(vconf)
BuildRequires:  pkgconfig(dlog)

%description
development package of library to control OAL APIs

%package devel
Summary:	Control OAL APIs (devel)
Group:		Development/Libraries
Requires:	%{name} = %{version}-%{release}

%description devel
Library to control OAL APIs (devel)


%prep
%setup -q

%build
%if 0%{?tizen_build_binary_release_type_eng}
export CFLAGS+=" -DTIZEN_ENGINEER_MODE"
%endif
CFLAGS="$CFLAGS" cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}
make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
mkdir -p %{buildroot}/usr/share/license
cp LICENSE %{buildroot}/usr/share/license/%{name}
%make_install
cp -a %{SOURCE1} %{buildroot}%{_datadir}/

%post
if [ ! -e "/lib/firmware/mdnie" ]
then
	mkdir -p /lib/firmware/mdnie
fi

%postun

%files
%attr(700,root,root) %{_bindir}/set-safemode.sh
%{_libdir}/libdevice-node.so.*
%{_libdir}/libdevice-node-generic.so
%{_libdir}/udev/rules.d/*
%{_datadir}/license/%{name}
%attr(755,root,root) %{_sysconfdir}/rc.d/*
%manifest %{_datadir}/%{name}.manifest

%files devel
%{_includedir}/device-node/*.h
%{_libdir}/libdevice-node.so
%{_libdir}/pkgconfig/*.pc
