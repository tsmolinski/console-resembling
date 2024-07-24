// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/ConsoleHUD.h"
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConsoleHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConsoleHUD_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ConsoleHUD.h" },
		{ "ModuleRelativePath", "ConsoleHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConsoleHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConsoleHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AConsoleHUD_Statics::ClassParams = {
		&AConsoleHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
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
	IMPLEMENT_CLASS(AConsoleHUD, 514073957);
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
