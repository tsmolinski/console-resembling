// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CONSOLERESEMBLING_ConsoleMessage_generated_h
#error "ConsoleMessage.generated.h already included, missing '#pragma once' in ConsoleMessage.h"
#endif
#define CONSOLERESEMBLING_ConsoleMessage_generated_h

#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_17_DELEGATE \
static inline void FOnWidgetRemoved_DelegateWrapper(const FMulticastScriptDelegate& OnWidgetRemoved) \
{ \
	OnWidgetRemoved.ProcessMulticastDelegate<UObject>(NULL); \
}


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_SPARSE_DATA
#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_RPC_WRAPPERS
#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConsoleMessage(); \
	friend struct Z_Construct_UClass_UConsoleMessage_Statics; \
public: \
	DECLARE_CLASS(UConsoleMessage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleResembling"), NO_API) \
	DECLARE_SERIALIZER(UConsoleMessage)


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUConsoleMessage(); \
	friend struct Z_Construct_UClass_UConsoleMessage_Statics; \
public: \
	DECLARE_CLASS(UConsoleMessage, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ConsoleResembling"), NO_API) \
	DECLARE_SERIALIZER(UConsoleMessage)


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleMessage) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleMessage); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleMessage(UConsoleMessage&&); \
	NO_API UConsoleMessage(const UConsoleMessage&); \
public:


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UConsoleMessage(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UConsoleMessage(UConsoleMessage&&); \
	NO_API UConsoleMessage(const UConsoleMessage&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UConsoleMessage); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConsoleMessage); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConsoleMessage)


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LifetimeProgressbar() { return STRUCT_OFFSET(UConsoleMessage, LifetimeProgressbar); } \
	FORCEINLINE static uint32 __PPO__Lifetime() { return STRUCT_OFFSET(UConsoleMessage, Lifetime); }


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_11_PROLOG
#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_PRIVATE_PROPERTY_OFFSET \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_SPARSE_DATA \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_RPC_WRAPPERS \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_INCLASS \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_PRIVATE_PROPERTY_OFFSET \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_SPARSE_DATA \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_INCLASS_NO_PURE_DECLS \
	ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CONSOLERESEMBLING_API UClass* StaticClass<class UConsoleMessage>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ConsoleResembling_Source_ConsoleResembling_Widgets_ConsoleMessage_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
