// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioNiagara/Public/FMODNiagaraEventPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODNiagaraEventPlayer() {}
// Cross Module References
	FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
	FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer();
	FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_FMODStudioNiagara();
// End Cross Module References
	void UFMODNiagaraEventPlayer::StaticRegisterNativesUFMODNiagaraEventPlayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODNiagaraEventPlayer);
	UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer_NoRegister()
	{
		return UFMODNiagaraEventPlayer::StaticClass();
	}
	struct Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EventToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EventToPlay;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[];
#endif
		static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[];
#endif
		static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[];
#endif
		static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioNiagara,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::Class_MetaDataParams[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
		{ "DisplayName", "FMOD Event Player" },
		{ "IncludePath", "FMODNiagaraEventPlayer.h" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** Reference to the audio asset to play */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "Reference to the audio asset to play" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay = { "EventToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, EventToPlay), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay_MetaData) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000002020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
	};
#endif
	void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bLimitPlaysPerTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
		{ "Comment", "/** This sets the max number of sounds played each tick.\n     *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n     *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, MaxPlaysPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
	};
#endif
	void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_MetaData) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\n     *  Currently the FMOD Niagara integration will not play in Editor.\n     */" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\nCurrently the FMOD Niagara integration will not play in Editor." },
	};
#endif
	void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
	{
		((UFMODNiagaraEventPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_MetaData) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODNiagaraEventPlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::ClassParams = {
		&UFMODNiagaraEventPlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer()
	{
		if (!Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton, Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton;
	}
	template<> FMODSTUDIONIAGARA_API UClass* StaticClass<UFMODNiagaraEventPlayer>()
	{
		return UFMODNiagaraEventPlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODNiagaraEventPlayer);
	UFMODNiagaraEventPlayer::~UFMODNiagaraEventPlayer() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFMODNiagaraEventPlayer, UFMODNiagaraEventPlayer::StaticClass, TEXT("UFMODNiagaraEventPlayer"), &Z_Registration_Info_UClass_UFMODNiagaraEventPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODNiagaraEventPlayer), 2121891106U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_3982473413(TEXT("/Script/FMODStudioNiagara"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
