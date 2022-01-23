#ifndef UE4SS_SDK_LoreScreen_MissionType_HPP
#define UE4SS_SDK_LoreScreen_MissionType_HPP

class ULoreScreen_MissionType_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* HoverStep;
    class UTextBlock* Big_Headline;
    class UImage* BigHeader_Header;
    class UImage* Image_59;
    class UImage* Image_124;
    class UImage* Image_BG;
    class UImage* Image_Outline;
    class ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow1;
    class ULore_ITM_MissionStepRow_C* Lore_ITM_MissionStepRow2;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UOverlay* Overlay_BigDescription;
    class URichTextSizable* RichTextSizable_127;
    class UTextBlock* TextBlock_StepNumber;
    class UVerticalBox* VerticalBox_StepsHolder;
    class UMissionTemplate* MissionTemplate;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    int32 NumberPerRow;
    int32 NumberOnCurrRow;

    void StepHovered(FMissionStepDescription step, int32 StepIndex, int32 StepsInRow, float Temp_float_Variable, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float K2Node_Select_Default, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable_1, float K2Node_Select_Default_1, FVector2D CallFunc_MakeVector2D_ReturnValue);
    void Construct();
    void RefreshContent();
    void StepUnhovered();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_LoreScreen_MissionType(int32 EntryPoint, FExecuteUbergraph_LoreScreen_MissionTypeK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_GetMissionTypeIndex_ReturnValue, class UTexture2D* CallFunc_GetMissionImageLarge_ReturnValue, FObjectiveMissionIcon CallFunc_GetPrimaryObjectiveIcon_ReturnValue, FExecuteUbergraph_LoreScreen_MissionTypeK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FText CallFunc_GetMissionInfo_InfoHeadline, FText CallFunc_GetMissionInfo_InfoDescription, TArray<FMissionStepDescription>& CallFunc_GetMissionInfo_Steps, FMissionStepDescription CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 Temp_int_Variable_2, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ULore_ITM_MissionStepRow_C* K2Node_Select_Default_1, int32 K2Node_Select_Default_2, class ULore_ITM_MissionStep_C* CallFunc_AddStep_StepWidget);
};

#endif
