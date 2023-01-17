#ifndef UE4SS_SDK_ITM_MisSel_MissionIconBasic_Locked_HPP
#define UE4SS_SDK_ITM_MisSel_MissionIconBasic_Locked_HPP

class UITM_MisSel_MissionIconBasic_Locked_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_BG;
    class UImage* ICON_MissionType;
    class UImage* ICON_Outline;
    bool Border;
    bool ThickOutline;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MisSel_MissionIconBasic_Locked(int32 EntryPoint);
};

#endif
