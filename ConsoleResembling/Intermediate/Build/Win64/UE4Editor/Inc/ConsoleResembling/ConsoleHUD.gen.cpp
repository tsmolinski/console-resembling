// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/HUD/ConsoleHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleHUD() {}
// Cross Module References
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsoleHUD_NoRegister();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_AConsoleHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleWidget_NoRegister();
// End Cross Module References
	void AConsoleHUD::StaticRegisterNativesAConsoleHUD()
	{
	}
	UClass* Z_Construct_UClass_AConsoleHUD_NoRegister()
	{
		return AConsoleHUD::StaticClass();
	}
	struct Z_Construct_UClass_AConsoleHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ConsoleWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsoleWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConsoleWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsoleHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/ConsoleHUD.h" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData[] = {
		{ "Category", "ConsoleHUD" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass = { "ConsoleWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, ConsoleWidgetClass), Z_Construct_UClass_UConsoleWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/ConsoleHUD.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget = { "ConsoleWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AConsoleHUD, ConsoleWidget), Z_Construct_UClass_UConsoleWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConsoleHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConsoleHUD_Statics::NewProp_ConsoleWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsoleHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsoleHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsoleHUD_Statics::ClassParams = {
		&AConsoleHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConsoleHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConsoleHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AConsoleHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AConsoleHUD, 2528162687);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<AConsoleHUD>()
	{
		return AConsoleHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AConsoleHUD(Z_Construct_UClass_AConsoleHUD, &AConsoleHUD::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("AConsoleHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConsoleHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
