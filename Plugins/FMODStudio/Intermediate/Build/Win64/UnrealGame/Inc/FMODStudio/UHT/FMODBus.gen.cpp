// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODBus.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODBus() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAsset();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODBus_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODBus::StaticRegisterNativesUFMODBus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODBus);
	UClass* Z_Construct_UClass_UFMODBus_NoRegister()
	{
		return UFMODBus::StaticClass();
	}
	struct Z_Construct_UClass_UFMODBus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODBus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFMODAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBus_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODBus_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FMOD Bus Asset.\n */" },
#endif
		{ "IncludePath", "FMODBus.h" },
		{ "ModuleRelativePath", "Classes/FMODBus.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Bus Asset." },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODBus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODBus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODBus_Statics::ClassParams = {
		&UFMODBus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODBus_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODBus_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UFMODBus()
	{
		if (!Z_Registration_Info_UClass_UFMODBus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODBus.OuterSingleton, Z_Construct_UClass_UFMODBus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODBus.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODBus>()
	{
		return UFMODBus::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODBus);
	UFMODBus::~UFMODBus() {}
	struct Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODBus, UFMODBus::StaticClass, TEXT("UFMODBus"), &Z_Registration_Info_UClass_UFMODBus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODBus), 4095667239U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_1123355548(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODBus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
