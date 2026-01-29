// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubSystems/Public/SaveSubSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_USaveSubSystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_USaveSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubSystems();
// End Cross Module References

// Begin Class USaveSubSystem Function ReceiveDeinitialize
static FName NAME_USaveSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void USaveSubSystem::ReceiveDeinitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_USaveSubSystem_ReceiveDeinitialize),NULL);
}
struct Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSubSystem, nullptr, "ReceiveDeinitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USaveSubSystem Function ReceiveDeinitialize

// Begin Class USaveSubSystem Function ReceiveInitialize
static FName NAME_USaveSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void USaveSubSystem::ReceiveInitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_USaveSubSystem_ReceiveInitialize),NULL);
}
struct Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "// End USubsystem\n" },
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
		{ "ToolTip", "End USubsystem" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveSubSystem, nullptr, "ReceiveInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class USaveSubSystem Function ReceiveInitialize

// Begin Class USaveSubSystem
void USaveSubSystem::StaticRegisterNativesUSaveSubSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveSubSystem);
UClass* Z_Construct_UClass_USaveSubSystem_NoRegister()
{
	return USaveSubSystem::StaticClass();
}
struct Z_Construct_UClass_USaveSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SaveSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveSubSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // 482972686
		{ &Z_Construct_UFunction_USaveSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 1282721380
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveSubSystem_Statics::ClassParams = {
	&USaveSubSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveSubSystem()
{
	if (!Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton, Z_Construct_UClass_USaveSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveSubSystem.OuterSingleton;
}
template<> SUBSYSTEMS_API UClass* StaticClass<USaveSubSystem>()
{
	return USaveSubSystem::StaticClass();
}
USaveSubSystem::USaveSubSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveSubSystem);
USaveSubSystem::~USaveSubSystem() {}
// End Class USaveSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_SaveSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveSubSystem, USaveSubSystem::StaticClass, TEXT("USaveSubSystem"), &Z_Registration_Info_UClass_USaveSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveSubSystem), 2163574875U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_SaveSubSystem_h_3584136232(TEXT("/Script/SubSystems"),
	Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_SaveSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_SaveSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
