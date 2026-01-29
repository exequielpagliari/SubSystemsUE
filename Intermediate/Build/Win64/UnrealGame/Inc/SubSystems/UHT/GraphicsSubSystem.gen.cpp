// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubSystems/Public/GraphicsSubSystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGraphicsSubSystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_UGraphicsSubSystem();
SUBSYSTEMS_API UClass* Z_Construct_UClass_UGraphicsSubSystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SubSystems();
// End Cross Module References

// Begin Class UGraphicsSubSystem Function ReceiveDeinitialize
static FName NAME_UGraphicsSubSystem_ReceiveDeinitialize = FName(TEXT("ReceiveDeinitialize"));
void UGraphicsSubSystem::ReceiveDeinitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UGraphicsSubSystem_ReceiveDeinitialize),NULL);
}
struct Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "DisplayName", "On Deinitialize" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphicsSubSystem, nullptr, "ReceiveDeinitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGraphicsSubSystem Function ReceiveDeinitialize

// Begin Class UGraphicsSubSystem Function ReceiveInitialize
static FName NAME_UGraphicsSubSystem_ReceiveInitialize = FName(TEXT("ReceiveInitialize"));
void UGraphicsSubSystem::ReceiveInitialize()
{
	ProcessEvent(FindFunctionChecked(NAME_UGraphicsSubSystem_ReceiveInitialize),NULL);
}
struct Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Events" },
		{ "Comment", "// End USubsystem\n" },
		{ "DisplayName", "On Initialize" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
		{ "ToolTip", "End USubsystem" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGraphicsSubSystem, nullptr, "ReceiveInitialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGraphicsSubSystem Function ReceiveInitialize

// Begin Class UGraphicsSubSystem
void UGraphicsSubSystem::StaticRegisterNativesUGraphicsSubSystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGraphicsSubSystem);
UClass* Z_Construct_UClass_UGraphicsSubSystem_NoRegister()
{
	return UGraphicsSubSystem::StaticClass();
}
struct Z_Construct_UClass_UGraphicsSubSystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "GraphicsSubSystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/GraphicsSubSystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGraphicsSubSystem_ReceiveDeinitialize, "ReceiveDeinitialize" }, // 1093434646
		{ &Z_Construct_UFunction_UGraphicsSubSystem_ReceiveInitialize, "ReceiveInitialize" }, // 435260419
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGraphicsSubSystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGraphicsSubSystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SubSystems,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphicsSubSystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGraphicsSubSystem_Statics::ClassParams = {
	&UGraphicsSubSystem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGraphicsSubSystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UGraphicsSubSystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGraphicsSubSystem()
{
	if (!Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton, Z_Construct_UClass_UGraphicsSubSystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGraphicsSubSystem.OuterSingleton;
}
template<> SUBSYSTEMS_API UClass* StaticClass<UGraphicsSubSystem>()
{
	return UGraphicsSubSystem::StaticClass();
}
UGraphicsSubSystem::UGraphicsSubSystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGraphicsSubSystem);
UGraphicsSubSystem::~UGraphicsSubSystem() {}
// End Class UGraphicsSubSystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_GraphicsSubSystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGraphicsSubSystem, UGraphicsSubSystem::StaticClass, TEXT("UGraphicsSubSystem"), &Z_Registration_Info_UClass_UGraphicsSubSystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGraphicsSubSystem), 2645681303U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_GraphicsSubSystem_h_3891098900(TEXT("/Script/SubSystems"),
	Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_GraphicsSubSystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_exepa_Documents_Unreal_Projects_Plugins_SubSystems_HostProject_Plugins_SubSystems_Source_SubSystems_Public_GraphicsSubSystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
