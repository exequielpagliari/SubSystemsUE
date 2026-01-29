// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubSystems/Public/AudioSubSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAudioSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_UAudioSubSystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_UAudioSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubSystems();
// End Cross Module References

// Begin Class UAudioSubSystem Function ReceiveDeinitialize
static FName NAME_UAudioSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void UAudioSubSystem::ReceiveDeinitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UAudioSubSystem_ReceiveDeinitialize),NULL);
}
struct Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSubSystem, nullptr, "ReceiveDeinitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAudioSubSystem Function ReceiveDeinitialize

// Begin Class UAudioSubSystem Function ReceiveInitialize
static FName NAME_UAudioSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void UAudioSubSystem::ReceiveInitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UAudioSubSystem_ReceiveInitialize),NULL);
}
struct Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "// End USubsystem\n" },
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
		{ "ToolTip", "End USubsystem" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAudioSubSystem, nullptr, "ReceiveInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAudioSubSystem Function ReceiveInitialize

// Begin Class UAudioSubSystem
void UAudioSubSystem::StaticRegisterNativesUAudioSubSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAudioSubSystem);
UClass* Z_Construct_UClass_UAudioSubSystem_NoRegister()
{
	return UAudioSubSystem::StaticClass();
}
struct Z_Construct_UClass_UAudioSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AudioSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AudioSubSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAudioSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // 634965645
		{ &Z_Construct_UFunction_UAudioSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 98266945
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAudioSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAudioSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAudioSubSystem_Statics::ClassParams = {
	&UAudioSubSystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAudioSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UAudioSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAudioSubSystem()
{
	if (!Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton, Z_Construct_UClass_UAudioSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAudioSubSystem.OuterSingleton;
}
template<> SUBSYSTEMS_API UClass* StaticClass<UAudioSubSystem>()
{
	return UAudioSubSystem::StaticClass();
}
UAudioSubSystem::UAudioSubSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAudioSubSystem);
UAudioSubSystem::~UAudioSubSystem() {}
// End Class UAudioSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAudioSubSystem, UAudioSubSystem::StaticClass, TEXT("UAudioSubSystem"), &Z_Registration_Info_UClass_UAudioSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAudioSubSystem), 675366705U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_1483678760(TEXT("/Script/SubSystems"),
	Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_AudioSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
