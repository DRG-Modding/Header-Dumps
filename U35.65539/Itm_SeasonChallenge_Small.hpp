#ifndef UE4SS_SDK_Itm_SeasonChallenge_Small_HPP
#define UE4SS_SDK_Itm_SeasonChallenge_Small_HPP

class UItm_SeasonChallenge_Small_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* ImageLoaded;
    UButton* Button_Outer;
    UImage* I_Background;
    UImage* I_ButtonStyle;
    UImage* I_ButtonStyle_1;
    UImage* I_ButtonStyle_2;
    UImage* Image_297;
    UImage* Image_Challenge;
    UImage* Image_Type;
    UProgressBar* ProgressBar_142;
    URetainerBox* RetainerBox_Masking;
    USizeBox* SizeBox_Outer;
    UTextBlock* Text_NumberOfWins;
    UTextBlock* TextBlock_ChallengeText;
    UVerticalBox* VerticalBox_Content;
    FChallengeInfo ChallengeInfo;
    int32 challengeIndex;
    FItm_SeasonChallenge_Small_CHoverChanged HoverChanged;
    void HoverChanged(bool IsHovered, int32 Index);

    void Refresh();
    void Construct();
    void OnImageLoaded();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__Button_Outer_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void SetHoverColor(FLinearColor InColorAndOpacity);
    void ExecuteUbergraph_Itm_SeasonChallenge_Small(int32 EntryPoint, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, AsyncLoadCompleteDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, const TArray<SoftObjectProperty>& K2Node_MakeArray_Array, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_Format_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, FLinearColor K2Node_CustomEvent_InColorAndOpacity, FSlateColor K2Node_MakeStruct_SlateColor, UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue);
    void HoverChanged__DelegateSignature(bool IsHovered, int32 Index);
}

#endif
