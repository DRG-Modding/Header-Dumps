#ifndef UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP
#define UE4SS_SDK_ITM_WeaponAndPerkInfo_HPP

class UITM_WeaponAndPerkInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Enter;
    class UBasic_Window_CutCorner_Gradient_C* Basic_Window_CutCorner_Gradient;
    class UGridPanel* GridPanel_LoadoutsOuter;
    class UImage* Image_Randomizer;
    class UITM_PerkInfoBox_C* ITM_PerkInfoBox;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Armor;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_ClassTool;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Grenade;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Mining;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Prim;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Secondary;
    class UITM_WeaponInfo_C* ITM_WeaponInfo_Traversal;

    void Update();
    void PlayEnter();
    void PlayLeave();
    void EnterFinished();
    void ExecuteUbergraph_ITM_WeaponAndPerkInfo(int32 EntryPoint);
};

#endif
