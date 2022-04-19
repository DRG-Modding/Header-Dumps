#ifndef UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconSmall_HPP

class UITM_MisSel_MissionIconSmall_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UITM_MisSel_MissionIconBasic_C* ITEM_MissionSelection_MissionIconBasic;
    class UITM_MisSel_MissionIconBasic_Locked_C* ITM_MisSel_MissionIconBasic_Locked;

    void SetData(class UGeneratedMission* mission);
    void ExecuteUbergraph_ITM_MisSel_MissionIconSmall(int32 EntryPoint);
};

#endif
