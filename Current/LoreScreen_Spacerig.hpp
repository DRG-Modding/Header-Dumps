#ifndef UE4SS_SDK_LoreScreen_Spacerig_HPP
#define UE4SS_SDK_LoreScreen_Spacerig_HPP

class ULoreScreen_Spacerig_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton_Spacerig_Map_Circle_C* AbyssBar;
    class UButton_Spacerig_Map_Circle_C* ArcadeArea;
    class UButton_Spacerig_Map_Circle_C* AssignmentTerminal;
    class UCanvasPanel* CanvasPanel_Holder;
    class UButton_Spacerig_Map_Circle_C* DeepDives;
    class UButton_Spacerig_Map_Circle_C* DroneModification;
    class UButton_Spacerig_Map_Circle_C* DropPod;
    class UButton_Spacerig_Map_Circle_C* Equipment;
    class UButton_Spacerig_Map_Circle_C* Forge;
    class UImage* Image_167;
    class UButton_Spacerig_Map_Circle_C* Jukebox;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UButton_Spacerig_Map_Circle_C* MedicalFacility;
    class UButton_Spacerig_Map_Circle_C* MemorialHall;
    class UButton_Spacerig_Map_Circle_C* MineralTrade;
    class UButton_Spacerig_Map_Circle_C* MissionTerminal;
    class UButton_Spacerig_Map_Circle_C* PersonalCabin3;
    class UButton_Spacerig_Map_Circle_C* PickAxe;
    class UButton_Spacerig_Map_Circle_C* SeasonTerminal;
    class UButton_Spacerig_Map_Circle_C* Shop;
    class ULore_Container_PictureOverText_C* TerminalDescriptino;
    class UButton_Spacerig_Map_Circle_C* WardRobe1;
    class UAudioComponent* HoverSound;
    float Xmin;
    float Xmax;
    float Ymin;
    float Ymax;
    bool HasHovered;
    class UButton_Spacerig_Map_Circle_C* ActiveButton;

    void Construct();
    void RefreshContent();
    void OnHover(class UButton_Spacerig_Map_Circle_C* Button, class UMinersManualData* Data);
    void PlayButtonPings();
    void OnUnhover(class UButton_Spacerig_Map_Circle_C* Button);
    void ExecuteUbergraph_LoreScreen_Spacerig(int32 EntryPoint);
};

#endif
