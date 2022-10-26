#ifndef UE4SS_SDK_Cheat_QuickLight_HPP
#define UE4SS_SDK_Cheat_QuickLight_HPP

class UCheat_QuickLight_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UCheckBox* IsInfiniteCheckbox;
    class USpinBox* Numoflightsspinbox;
    class USpinBox* RotZ;
    class UButton* SpawnLightbutton;

    void BndEvt__Button_67_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Spawn Lights(class APlayerCharacter* Owning character);
    void ExecuteUbergraph_Cheat_QuickLight(int32 EntryPoint);
};

#endif
