// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Sequencer/FMODEventControlSection.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FMODSTUDIO_FMODEventControlSection_generated_h
#error "FMODEventControlSection.generated.h already included, missing '#pragma once' in FMODEventControlSection.h"
#endif
#define FMODSTUDIO_FMODEventControlSection_generated_h

#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFMODEventControlChannel_Statics; \
	FMODSTUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FMovieSceneByteChannel Super;


template<> FMODSTUDIO_API UScriptStruct* StaticStruct<struct FFMODEventControlChannel>();

#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_SPARSE_DATA
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_RPC_WRAPPERS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_ACCESSORS
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
private: \
	static void StaticRegisterNativesUFMODEventControlSection(); \
	friend struct Z_Construct_UClass_UFMODEventControlSection_Statics; \
public: \
	DECLARE_CLASS(UFMODEventControlSection, UMovieSceneSection, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FMODStudio"), FMODSTUDIO_API) \
	DECLARE_SERIALIZER(UFMODEventControlSection)


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FMODSTUDIO_API UFMODEventControlSection(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFMODEventControlSection) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FMODSTUDIO_API, UFMODEventControlSection); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFMODEventControlSection); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FMODSTUDIO_API UFMODEventControlSection(UFMODEventControlSection&&); \
	FMODSTUDIO_API UFMODEventControlSection(const UFMODEventControlSection&); \
public: \
	FMODSTUDIO_API virtual ~UFMODEventControlSection();


#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_50_PROLOG
#define FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_SPARSE_DATA \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_RPC_WRAPPERS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_ACCESSORS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_INCLASS \
	FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h_53_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FMODSTUDIO_API UClass* StaticClass<class UFMODEventControlSection>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_FMODStudio_Source_FMODStudio_Private_Sequencer_FMODEventControlSection_h


#define FOREACH_ENUM_EFMODEVENTCONTROLKEY(op) \
	op(EFMODEventControlKey::Stop) \
	op(EFMODEventControlKey::Play) \
	op(EFMODEventControlKey::Pause) 

enum class EFMODEventControlKey : uint8;
template<> struct TIsUEnumClass<EFMODEventControlKey> { enum { Value = true }; };
template<> FMODSTUDIO_API UEnum* StaticEnum<EFMODEventControlKey>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
