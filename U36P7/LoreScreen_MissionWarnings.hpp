#ifndef UE4SS_SDK_LoreScreen_MissionWarnings_HPP
#define UE4SS_SDK_LoreScreen_MissionWarnings_HPP

class ULoreScreen_MissionWarnings_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UScrollBox* ScrollBox_List;
    class UUniformGridPanel* UniformGridPanel_ItemHolder;
    class UAudioComponent* HoverSound;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_MissionWarnings(int32 EntryPoint);
};

#endif
