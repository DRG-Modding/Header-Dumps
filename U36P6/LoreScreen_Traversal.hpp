#ifndef UE4SS_SDK_LoreScreen_Traversal_HPP
#define UE4SS_SDK_LoreScreen_Traversal_HPP

class ULoreScreen_Traversal_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_IconWithOutline_C* DrillerIcon;
    class UBasic_IconWithOutline_C* EngineerIcon;
    class UBasic_IconWithOutline_C* GunnarIcon;
    class ULore_Container_PictureOverText_C* Lore_Container_PictureOverText1;
    class ULore_Container_PictureOverText_C* Lore_Container_PictureOverText2;
    class ULore_Container_PictureOverText_C* Lore_Container_PictureOverText3;
    class ULore_Container_PictureOverText_C* Lore_Container_PictureOverText4;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class UBasic_IconWithOutline_C* ScoutIcon;
    class UAudioComponent* HoverSound;
    class UPlayerCharacterID* DrillerID;
    class UPlayerCharacterID* ScoutID;
    class UPlayerCharacterID* GunnerID;
    class UPlayerCharacterID* EngineerID;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Traversal(int32 EntryPoint);
};

#endif
