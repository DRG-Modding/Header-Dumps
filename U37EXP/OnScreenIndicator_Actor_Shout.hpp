#ifndef UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP
#define UE4SS_SDK_OnScreenIndicator_Actor_Shout_HPP

class UOnScreenIndicator_Actor_Shout_C : public UShoutWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UUI_ShoutBox_C* ShoutBox;

    FVector2D CalculateScreenPos();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Construct();
    void OnShout();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__OnScreenIndicator_Actor_Shout_ShoutBox_K2Node_ComponentBoundEvent_0_OnShoutActiveChanged__DelegateSignature(bool InShoutActive);
    void UpdateScreenPosAndDistance();
    void ExecuteUbergraph_OnScreenIndicator_Actor_Shout(int32 EntryPoint);
};

#endif
