#ifndef UE4SS_SDK_ITM_MissionComplete_Resource_HPP
#define UE4SS_SDK_ITM_MissionComplete_Resource_HPP

class UITM_MissionComplete_Resource_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UTextBlock* DataDescription;
    class UTextBlock* DataValue;
    class UVerticalBox* TextVertical;
    int32 Amount;
    FText Description;
    int32 Size;

    float Scale(float OriginalSizefloat CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue);
    void Init With Icon(FText Description, int32 Amount, class UTexture2D* Texture);
    void PreConstruct(bool IsDesignTime);
    void Init No Anim(FText Description, int32 Amount, class UTexture2D* Texture);
    void Start Counter();
    void Init(FText Description, int32 Amount);
    void ExecuteUbergraph_ITM_MissionComplete_Resource(int32 EntryPoint, FText K2Node_CustomEvent_Description, int32 K2Node_CustomEvent_Amount, FText K2Node_CustomEvent_Description_2, int32 K2Node_CustomEvent_Amount_2, class UTexture2D* K2Node_CustomEvent_Texture_1, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FText K2Node_CustomEvent_Description_1, int32 K2Node_CustomEvent_Amount_1, class UTexture2D* K2Node_CustomEvent_Texture, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, float CallFunc_Scale_ReturnValue, float CallFunc_Scale_ReturnValue_1, int32 CallFunc_Round_ReturnValue);
};

#endif
