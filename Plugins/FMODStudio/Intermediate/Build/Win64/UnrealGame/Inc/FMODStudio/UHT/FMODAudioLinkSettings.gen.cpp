// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../FMODAudioLink/Public/FMODAudioLinkSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAudioLinkSettings() {}
// Cross Module References
	AUDIOLINKCORE_API UClass* Z_Construct_UClass_UAudioLinkSettingsAbstract();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAudioLinkSettings_NoRegister();
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References
	void UFMODAudioLinkSettings::StaticRegisterNativesUFMODAudioLinkSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAudioLinkSettings);
	UClass* Z_Construct_UClass_UFMODAudioLinkSettings_NoRegister()
	{
		return UFMODAudioLinkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UFMODAudioLinkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkEvent_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LinkEvent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldClearBufferOnReceipt_MetaData[];
#endif
		static void NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldClearBufferOnReceipt;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProducerToConsumerBufferRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProducerToConsumerBufferRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialSilenceFillRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSilenceFillRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkEventResolved_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LinkEventResolved;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODAudioLinkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioLinkSettingsAbstract,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "" },
		{ "ModuleRelativePath", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent_MetaData[] = {
		{ "Category", "default" },
		{ "ModuleRelativePath", "" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent = { "LinkEvent", nullptr, (EPropertyFlags)0x0044000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEvent), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent_MetaData), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "If this is set, the receiving code will clear the buffer after it's read, so it's not rendered by Unreal. Only applies if running both renderers at once." },
	};
#endif
	void Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit(void* Obj)
	{
		((UFMODAudioLinkSettings*)Obj)->bShouldClearBufferOnReceipt = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt = { "bShouldClearBufferOnReceipt", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODAudioLinkSettings), &Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer.  */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "This is the ratio of producer to consumer buffer size, 2.0 means its twice as big as the consumer buffer." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio = { "ProducerToConsumerBufferRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, ProducerToConsumerBufferRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData[] = {
		{ "Category", "default" },
		{ "Comment", "/** Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Ratio of initial buffer to fill with silence ahead of consumption. Adjusting this can resolve starvation at the cost of added latency." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio = { "InitialSilenceFillRatio", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, InitialSilenceFillRatio), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved_MetaData[] = {
		{ "Comment", "/** Once the SoftObjectReference has been resolved, attach the reference here so it's owned. */" },
		{ "ModuleRelativePath", "" },
		{ "ToolTip", "Once the SoftObjectReference has been resolved, attach the reference here so it's owned." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved = { "LinkEventResolved", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAudioLinkSettings, LinkEventResolved), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved_MetaData), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEvent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_bShouldClearBufferOnReceipt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_ProducerToConsumerBufferRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_InitialSilenceFillRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAudioLinkSettings_Statics::NewProp_LinkEventResolved,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODAudioLinkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAudioLinkSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAudioLinkSettings_Statics::ClassParams = {
		&UFMODAudioLinkSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers),
		0,
		0x001010A6u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAudioLinkSettings_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAudioLinkSettings_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFMODAudioLinkSettings()
	{
		if (!Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton, Z_Construct_UClass_UFMODAudioLinkSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODAudioLinkSettings.OuterSingleton;
	}
	template<> FMODSTUDIO_API UClass* StaticClass<UFMODAudioLinkSettings>()
	{
		return UFMODAudioLinkSettings::StaticClass();
	}
	UFMODAudioLinkSettings::UFMODAudioLinkSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAudioLinkSettings);
	UFMODAudioLinkSettings::~UFMODAudioLinkSettings() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAudioLinkSettings, UFMODAudioLinkSettings::StaticClass, TEXT("UFMODAudioLinkSettings"), &Z_Registration_Info_UClass_UFMODAudioLinkSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAudioLinkSettings), 3811314011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_3721595540(TEXT("/Script/FMODStudio"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudio_Source_FMODAudioLink_Public_FMODAudioLinkSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
