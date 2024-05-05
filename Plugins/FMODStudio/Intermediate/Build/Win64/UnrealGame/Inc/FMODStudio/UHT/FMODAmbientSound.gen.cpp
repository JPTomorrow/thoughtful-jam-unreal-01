// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Classes/FMODAmbientSound.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAmbientSound() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound();
	FMODSTUDIO_API UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void AFMODAmbientSound::StaticRegisterNativesAFMODAmbientSound()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFMODAmbientSound);
	UClass* Z_Construct_UClass_AFMODAmbientSound_NoRegister()
	{
		return AFMODAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AFMODAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFMODAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Audio" },
		{ "ClassGroupNames", "Sounds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FMOD Ambient Sound.\n*/" },
#endif
		{ "HideCategories", "Collision Input" },
		{ "IncludePath", "FMODAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FMOD Ambient Sound." },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Sound" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Audio component for this actor */" },
#endif
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Sound" },
		{ "ModuleRelativePath", "Classes/FMODAmbientSound.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Audio component for this actor" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFMODAmbientSound, AudioComponent), Z_Construct_UClass_UFMODAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData), Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFMODAmbientSound_Statics::NewProp_AudioComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFMODAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFMODAmbientSound>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams = {
		&AFMODAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams), Z_Construct_UClass_AFMODAmbientSound_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFMODAmbientSound_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFMODAmbientSound()
	{
		if (!Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton, Z_Construct_UClass_AFMODAmbientSound_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFMODAmbientSound.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<AFMODAmbientSound>()
	{
		return AFMODAmbientSound::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFMODAmbientSound);
	AFMODAmbientSound::~AFMODAmbientSound() {}
	struct Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFMODAmbientSound, AFMODAmbientSound::StaticClass, TEXT("AFMODAmbientSound"), &Z_Registration_Info_UClass_AFMODAmbientSound, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFMODAmbientSound), 2514600281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_469592471(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_justi_code_unreal_projects_thoughtful_jam_unreal_01_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAmbientSound_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
