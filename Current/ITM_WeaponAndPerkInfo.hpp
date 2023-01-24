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
    void ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32 EntryPoint);
};

#endif
