// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSOLERESEMBLING_ConsoleHUD_generated_h
#error "ConsoleHUD.generated.h already included, missing '#pragma once' in ConsoleHUD.h"
#endif
#define CONSOLERESEMBLING_ConsoleHUD_generated_h

#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_SPARSE_DATA
#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_RPC_WRAPPERS
#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAConsoleHUD(); \
	friend struct Z_Construct_UClass_AConsoleHUD_Statics; \
public: \
	DECLARE_CLASS(AConsoleHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConsoleResembling"), NO_API) \
	DECLARE_SERIALIZER(AConsoleHUD)


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAConsoleHUD(); \
	friend struct Z_Construct_UClass_AConsoleHUD_Statics; \
public: \
	DECLARE_CLASS(AConsoleHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ConsoleResembling"), NO_API) \
	DECLARE_SERIALIZER(AConsoleHUD)


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConsoleHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConsoleHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConsoleHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConsoleHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConsoleHUD(AConsoleHUD&&); \
	NO_API AConsoleHUD(const AConsoleHUD&); \
public:


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AConsoleHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AConsoleHUD(AConsoleHUD&&); \
	NO_API AConsoleHUD(const AConsoleHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AConsoleHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AConsoleHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AConsoleHUD)


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ConsoleWidgetClass() { return STRUCT_OFFSET(AConsoleHUD, ConsoleWidgetClass); } \
	FORCEINLINE static uint32 __PPO__ConsoleWidget() { return STRUCT_OFFSET(AConsoleHUD, ConsoleWidget); }


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_11_PROLOG
#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_SPARSE_DATA \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_RPC_WRAPPERS \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_INCLASS \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_PRIVATE_PROPERTY_OFFSET \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_SPARSE_DATA \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_INCLASS_NO_PURE_DECLS \
	ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSOLERESEMBLING_API UClass* StaticClass<class AConsoleHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ConsoleResembling_Source_ConsoleResembling_HUD_ConsoleHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
