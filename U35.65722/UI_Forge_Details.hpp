#ifndef UE4SS_SDK_UI_Forge_Details_HPP
#define UE4SS_SDK_UI_Forge_Details_HPP

class UUI_Forge_Details_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimCount;
    class UWidgetAnimation* AnimOpenMatrix;
    class UBorder* CounterBorder;
    class UOverlay* CounterOverlay;
    class UBasic_Label_C* CountLabel;
    class UTextBlock* DescriptionSubTitle;
    class UTextBlock* DescriptionTitle;
    class UTextBlock* ForgeItemCategory;
    class UTextBlock* ForgeItemDesc;
    class UTextBlock* ForgeItemName;
    class UOverlay* ItemDescriptionOverlay;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UITM_MatrixCore_C* ITM_MatrixCore;
    class UITM_Overclock_Details_C* ITM_Overclock_Details;
    class UITM_Overclock_Icon_C* ITM_Overclock_Icon;
    class UBorder* LowerBarBorder;
    class UUI_Forge_Schematic_OwnerIcon_C* UI_SchematicOwnerIcon;
    class UBorder* UpperBarBorder;
    class UImage* UpperBarCorner;
    class UOverlay* WeaponIcon;
    FUI_Forge_Details_COnMatrixCoreOpened OnMatrixCoreOpened;
    void OnMatrixCoreOpened();
    bool ShowMatrixCore;
    int32 CountingTo;
    float CountProgress;

    void SequenceEvent__ENTRYPOINTUI_Forge_Details_0();
    void StartCounting(bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_GetFrameLinearColor_ColorAndOpacity, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetCountProgress(float InValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, int32 CallFunc_Round_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue);
    void OpenMatrixCore(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void SetItemDescription(FText Title, FText Subtitle, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void ShowSchematic(class USchematic* InSchematic, bool ShowSchematicDetails, FText SchematicDescription, FText SchematicName, class USchematicItem* Item, class UOverclockShematicItem* OverclockItem, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, FText CallFunc_TextToUpper_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue, const FText CallFunc_GetHeroName_ReturnValue, class USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue, ESlateVisibility K2Node_Select_Default, bool CallFunc_IsVisible_ReturnValue, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, FText CallFunc_TextToUpper_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible_2, bool CallFunc_SelectVisibility_VisibilityChanged_2, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_2, class UResourceSchematicItem* K2Node_DynamicCast_AsResource_Schematic_Item, bool K2Node_DynamicCast_bSuccess_1, class UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_2, class APlayerCharacter* CallFunc_GetCharacter_ReturnValue_1, class UUpgradableGearComponent* CallFunc_GetOwningGearComponent_ReturnValue, const FText CallFunc_GetHeroName_ReturnValue_1, FText CallFunc_GetGearName_ReturnValue, class USchematicItem* CallFunc_GetSchematicItem_ReturnValue, FText CallFunc_GetDescription_ReturnValue, FText CallFunc_GetTitle_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void AnimOpenMatrixFinished();
    void Stop Counting();
    void ExecuteUbergraph_UI_Forge_Details(int32 EntryPoint, FExecuteUbergraph_UI_Forge_DetailsK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool CallFunc_IsAnimationPlaying_ReturnValue);
    void OnMatrixCoreOpened__DelegateSignature();
};

#endif
