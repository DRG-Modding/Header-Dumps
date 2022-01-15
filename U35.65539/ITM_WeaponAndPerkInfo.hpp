#ifndef UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP
#define UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP

class UITM_WeaponAndPerkInfo_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Enter;
    UBasic_Window_CutCorner_Gradient_C* Basic_Window_CutCorner_Gradient;
    UITM_PerkInfoBox_C* ITM_PerkInfoBox;
    UITM_WeaponInfo_C* ITM_WeaponInfo;
    UITM_WeaponInfo_C* ITM_WeaponInfo_C_1;
    UITM_WeaponInfo_C* ITM_WeaponInfo_C_2;
    UITM_WeaponInfo_C* ITM_WeaponInfo_C_3;
    UITM_WeaponInfo_C* ITM_WeaponInfo_C_4;

    void Update();
    void PlayEnter();
    void PlayLeave();
    void EnterFinished();
    void ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32 EntryPoint, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
}

#endif
