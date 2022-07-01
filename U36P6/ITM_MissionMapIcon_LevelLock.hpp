#ifndef UE4SS_SDK_ITM_MissionMapIcon_LevelLock_HPP
#define UE4SS_SDK_ITM_MissionMapIcon_LevelLock_HPP

class UITM_MissionMapIcon_LevelLock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ICON_Border1;
    class UImage* ICON_Border2;
    class UImage* ICON_Padlock;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_MissionMapIcon_LevelLock(int32 EntryPoint);
};

#endif
