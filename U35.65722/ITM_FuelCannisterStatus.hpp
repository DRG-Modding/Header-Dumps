#ifndef UE4SS_SDK_ITM_FuelCannisterStatus_HPP
#define UE4SS_SDK_ITM_FuelCannisterStatus_HPP

class UITM_FuelCannisterStatus_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UProgressBar* FuelProgressBar;
    class UImage* Img_Complete;
    class UImage* Img_Outline;
    class UITM_CharacterIcon_C* ITM_CharacterIcon;
    class UWidgetSwitcher* WidgetSwitcher_0;
    float MaxLoad;
    int32 CannisterIndex;
    class AExtractorItem* extractor;
    bool Full;

    void SetProgress(float CurrentLoad, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void Reset(FLinearColor CallFunc_MenuColors_OutputColor);
    bool ReadyForExtractor(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void OnCurrentLoadChangedEvent(float FloatValue);
    void SetExtractor(class AExtractorItem* extractor);
    void OnDestroyed(class AActor* DestroyedActor);
    void CharacterChanged(class ACharacter* Character);
    void ForceFull();
    void ExecuteUbergraph_ITM_FuelCannisterStatus(int32 EntryPoint, FExecuteUbergraph_ITM_FuelCannisterStatusK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, FExecuteUbergraph_ITM_FuelCannisterStatusK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, FExecuteUbergraph_ITM_FuelCannisterStatusK2Node_CreateDelegate_OutputDelegate_2 K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_floatValue, class AExtractorItem* K2Node_CustomEvent_Extractor, class AActor* K2Node_CustomEvent_DestroyedActor, class ACharacter* K2Node_CustomEvent_character, bool CallFunc_IsValid_ReturnValue, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
};

#endif
