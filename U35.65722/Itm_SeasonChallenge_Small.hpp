#ifndef UE4SS_SDK_Itm_SeasonChallenge_Small_HPP
#define UE4SS_SDK_Itm_SeasonChallenge_Small_HPP

class UItm_SeasonChallenge_Small_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* ImageLoaded;
    class UButton* Button_Outer;
    class UImage* I_Background;
    class UImage* I_ButtonStyle;
    class UImage* I_ButtonStyle_1;
    class UImage* I_ButtonStyle_2;
    class UImage* Image_297;
    class UImage* Image_Challenge;
    class UImage* Image_Type;
    class UProgressBar* ProgressBar_142;
    class URetainerBox* RetainerBox_Masking;
    class USizeBox* SizeBox_Outer;
    class UTextBlock* Text_NumberOfWins;
    class UTextBlock* TextBlock_ChallengeText;
    class UVerticalBox* VerticalBox_Content;
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
    void ExecuteUbergraph_Itm_SeasonChallenge_Small(int32 EntryPoint, class UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, FExecuteUbergraph_Itm_SeasonChallenge_SmallK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, const TArray<TSoftObjectPtr<UObject>>& K2Node_MakeArray_Array, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, float CallFunc_Conv_IntToFloat_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue, FText CallFunc_Format_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, FLinearColor K2Node_CustomEvent_InColorAndOpacity, FSlateColor K2Node_MakeStruct_SlateColor, class UMaterialInstanceDynamic* CallFunc_GetEffectMaterial_ReturnValue);
    void HoverChanged__DelegateSignature(bool IsHovered, int32 Index);
};

#endif
