#ifndef UE4SS_SDK_ITM_FuelCannisterStatus_HPP
#define UE4SS_SDK_ITM_FuelCannisterStatus_HPP

class UITM_FuelCannisterStatus_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UProgressBar* FuelProgressBar;
    UImage* Img_Complete;
    UImage* Img_Outline;
    UITM_CharacterIcon_C* ITM_CharacterIcon;
    UWidgetSwitcher* WidgetSwitcher_0;
    float MaxLoad;
    int32 CannisterIndex;
    AExtractorItem* extractor;
    bool Full;

    void SetProgress(float CurrentLoad, FLinearColor CallFunc_MenuColors_OutputColor, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
    void Reset(FLinearColor CallFunc_MenuColors_OutputColor);
    bool ReadyForExtractor(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void Construct();
    void OnCurrentLoadChangedEvent(float FloatValue);
    void SetExtractor(UExtractorItem* extractor);
    void OnDestroyed(AActor* DestroyedActor);
    void CharacterChanged(UCharacter* Character);
    void ForceFull();
    void ExecuteUbergraph_ITM_FuelCannisterStatus(int32 EntryPoint, FloatDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, ActorDestroyedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, CharacterChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_floatValue, UExtractorItem* K2Node_CustomEvent_Extractor, AActor* K2Node_CustomEvent_DestroyedActor, UCharacter* K2Node_CustomEvent_character, bool CallFunc_IsValid_ReturnValue, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess);
}

#endif
