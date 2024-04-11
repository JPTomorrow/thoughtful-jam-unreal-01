// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FMODAudioComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFMODEvent;
#ifdef FMODSTUDIO_FMODAudioComponent_generated_h
#error "FMODAudioComponent.generated.h already included, missing '#pragma once' in FMODAudioComponent.h"
#endif
#define FMODSTUDIO_FMODAudioComponent_generated_h

#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_67_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODAttenuationDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODAttenuationDetails>();

#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODOcclusionDetails_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct();


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODOcclusionDetails>();

#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_109_DELEGATE \
FMODSTUDIO_API void FOnEventStopped_DelegateWrapper(const FMulticastScriptDelegate& OnEventStopped);


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_111_DELEGATE \
FMODSTUDIO_API void FOnSoundStopped_DelegateWrapper(const FMulticastScriptDelegate& OnSoundStopped);


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_113_DELEGATE \
FMODSTUDIO_API void FOnTimelineMarker_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineMarker, const FString& Name, int32 Position);


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_116_DELEGATE \
FMODSTUDIO_API void FOnTimelineBeat_DelegateWrapper(const FMulticastScriptDelegate& OnTimelineBeat, int32 Bar, int32 Beat, int32 Position, float Tempo, int32 TimeSignatureUpper, int32 TimeSignatureLower);


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetProgrammerSoundName); \
	DECLARE_FUNCTION(execGetTimelinePosition); \
	DECLARE_FUNCTION(execSetTimelinePosition); \
	DECLARE_FUNCTION(execGetLength); \
	DECLARE_FUNCTION(execGetProperty); \
	DECLARE_FUNCTION(execSetProperty); \
	DECLARE_FUNCTION(execGetParameterValue); \
	DECLARE_FUNCTION(execGetParameter); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execGetPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execSetPitch); \
	DECLARE_FUNCTION(execSetVolume); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execKeyOff); \
	DECLARE_FUNCTION(execRelease); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetEvent);


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
private: \
	static void StaticRegisterNativesUFMODAudioComponent(); \
	friend struct Z_Construct_UClass_UFMODAudioComponent_Statics; \
public: \
	DECLARE_CLASS(UFMODAudioComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FMODStudio"), NO_API) \
	DECLARE_SERIALIZER(UFMODAudioComponent)


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFMODAudioComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODAudioComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFMODAudioComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODAudioComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFMODAudioComponent(UFMODAudioComponent&&); \
	NO_API UFMODAudioComponent(const UFMODAudioComponent&); \
public: \
	NO_API virtual ~UFMODAudioComponent();


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_136_PROLOG
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_RPC_WRAPPERS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_INCLASS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h_139_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODAudioComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Classes_FMODAudioComponent_h


#define FOREACH_ENUM_EFMODEVENTPROPERTY(op) \
	op(EFMODEventProperty::ChannelPriority) \
	op(EFMODEventProperty::ScheduleDelay) \
	op(EFMODEventProperty::ScheduleLookahead) \
	op(EFMODEventProperty::MinimumDistance) \
	op(EFMODEventProperty::MaximumDistance) \
	op(EFMODEventProperty::Count) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
