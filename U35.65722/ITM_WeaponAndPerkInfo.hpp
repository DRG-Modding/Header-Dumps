#ifndef UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP
#define UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP

class UITM_WeaponAndPerkInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Enter;
    class UBasic_Window_CutCorner_Gradient_C* Basic_Window_CutCorner_Gradient;
    class UITM_PerkInfoBox_C* ITM_PerkInfoBox;
    class UITM_WeaponInfo_C* ITM_WeaponInfo;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_C_1;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_C_2;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_C_3;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_C_4;

    void Update();
    void PlayEnter();
    void PlayLeave();
    void EnterFinished();
    void ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32 EntryPoint, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FExecuteUbergraph_ITM_WeaponAndPerkInfoK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
};

#endif
