// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConsoleResembling/Widgets/ConsoleWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConsoleWidget() {}
// Cross Module References
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleWidget_NoRegister();
	CONSOLERESEMBLING_API UClass* Z_Construct_UClass_UConsoleWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ConsoleResembling();
	UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
// End Cross Module References
	void UConsoleWidget::StaticRegisterNativesUConsoleWidget()
	{
	}
	UClass* Z_Construct_UClass_UConsoleWidget_NoRegister()
	{
		return UConsoleWidget::StaticClass();
	}
	struct Z_Construct_UClass_UConsoleWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditableTextBlock_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditableTextBlock;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConsoleWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ConsoleResembling,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/ConsoleWidget.h" },
		{ "ModuleRelativePath", "Widgets/ConsoleWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConsoleWidget_Statics::NewProp_EditableTextBlock_MetaData[] = {
		{ "BindWidget", "" },
		{ "Comment", "//UEditableTextBlock* EditableTextBlock;\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/ConsoleWidget.h" },
		{ "ToolTip", "UEditableTextBlock* EditableTextBlock;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UConsoleWidget_Statics::NewProp_EditableTextBlock = { "EditableTextBlock", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UConsoleWidget, EditableTextBlock), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConsoleWidget_Statics::NewProp_EditableTextBlock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleWidget_Statics::NewProp_EditableTextBlock_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConsoleWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConsoleWidget_Statics::NewProp_EditableTextBlock,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConsoleWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConsoleWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UConsoleWidget_Statics::ClassParams = {
		&UConsoleWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConsoleWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConsoleWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConsoleWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConsoleWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UConsoleWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UConsoleWidget, 2843264497);
	template<> CONSOLERESEMBLING_API UClass* StaticClass<UConsoleWidget>()
	{
		return UConsoleWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UConsoleWidget(Z_Construct_UClass_UConsoleWidget, &UConsoleWidget::StaticClass, TEXT("/Script/ConsoleResembling"), TEXT("UConsoleWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConsoleWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
