[Defines]
  PLATFORM_NAME                  = Thani
  PLATFORM_GUID                  = 7B3B3B3B-3B3B-3B3B-3B3B-3B3B3B3B3B3B
  PLATFORM_VERSION               = 0.1
  DSC_SPECIFICATION              = 0x00010005
  OUTPUT_DIRECTORY               = Build/Thani
  SUPPORTED_ARCHITECTURES        = X64
  BUILD_TARGETS                  = DEBUG|RELEASE

[LibraryClasses]
  ThaniLib|ThaniPkg/Library/ThaniLib/ThaniLib.inf

[Components]
  ThaniPkg/Library/ThaniLib/ThaniLib.inf
