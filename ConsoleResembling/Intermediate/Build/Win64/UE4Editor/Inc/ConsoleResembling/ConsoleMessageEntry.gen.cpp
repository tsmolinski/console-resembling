// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/Widgets/ConsoleMessageEntry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleMessageEntry() {}
// Cross Module References
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessageEntry_NoRegister();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleMessageEntry();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
// End Cross Module References
	void UConsoleMessageEntry::StaticRegisterNativesUConsoleMessageEntry()
	{
	}
	UClass* Z_Construct_UClass_UConsoleMessageEntry_NoRegister()
	{
		return UConsoleMessageEntry::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleMessageEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EntryBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EntryBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleMessageEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessageEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ConsoleMessageEntry.h" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessageEntry.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleMessageEntry_Statics::NewProp_EntryBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "ConsoleMessageEntry" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/ConsoleMessageEntry.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsoleMessageEntry_Statics::NewProp_EntryBox = { "EntryBox", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleMessageEntry, EntryBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsoleMessageEntry_Statics::NewProp_EntryBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessageEntry_Statics::NewProp_EntryBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleMessageEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleMessageEntry_Statics::NewProp_EntryBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleMessageEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleMessageEntry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleMessageEntry_Statics::ClassParams = {
		&UConsoleMessageEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleMessageEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessageEntry_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleMessageEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleMessageEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleMessageEntry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleMessageEntry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleMessageEntry, 2575125768);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<UConsoleMessageEntry>()
	{
		return UConsoleMessageEntry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleMessageEntry(Z_Construct_UClass_UConsoleMessageEntry, &UConsoleMessageEntry::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("UConsoleMessageEntry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleMessageEntry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
