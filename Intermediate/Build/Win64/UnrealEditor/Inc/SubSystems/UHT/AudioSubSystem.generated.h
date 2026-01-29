// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AudioSubSystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SUBSYSTEMS_AudioSubSystem_generated_h
#error "AudioSubSystem.generated.h already included, missing '#pragma once' in AudioSubSystem.h"
#endif
#define SUBSYSTEMS_AudioSubSystem_generated_h

#define FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_CALLBACK_WRAPPERS
#define FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAudioSubSystem(); \
	friend struct Z_Construct_UClass_UAudioSubSystem_Statics; \
public: \
	DECLARE_CLASS(UAudioSubSystem, UGameInstanceSubsystem, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/SubSystems"), NO_API) \
	DECLARE_SERIALIZER(UAudioSubSystem)


#define FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAudioSubSystem(); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAudioSubSystem(UAudioSubSystem&&); \
	UAudioSubSystem(const UAudioSubSystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAudioSubSystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAudioSubSystem); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAudioSubSystem) \
	NO_API virtual ~UAudioSubSystem();


#define FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_12_PROLOG
#define FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_CALLBACK_WRAPPERS \
	FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SUBSYSTEMS_API UClass* StaticClass<class UAudioSubSystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
