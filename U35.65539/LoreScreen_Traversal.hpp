#ifndef UE4SS_SDK_LoreScreen_Traversal_HPP
#define UE4SS_SDK_LoreScreen_Traversal_HPP

class ULoreScreen_Traversal_C : ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_IconWithOutline_C* DrillerIcon;
    UBasic_IconWithOutline_C* EngineerIcon;
    UBasic_IconWithOutline_C* GunnarIcon;
    ULore_Container_PictureOverText_C* Lore_Container_PictureOverText1;
    ULore_Container_PictureOverText_C* Lore_Container_PictureOverText2;
    ULore_Container_PictureOverText_C* Lore_Container_PictureOverText3;
    ULore_Container_PictureOverText_C* Lore_Container_PictureOverText4;
    ULoreScreen_Template_C* LoreScreen_Template;
    UBasic_IconWithOutline_C* ScoutIcon;
    UAudioComponent* HoverSound;
    UPlayerCharacterID* DrillerID;
    UPlayerCharacterID* ScoutID;
    UPlayerCharacterID* GunnerID;
    UPlayerCharacterID* EngineerID;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_Traversal(int32 EntryPoint, FLinearColor CallFunc_GetColor_ReturnValue, FLinearColor CallFunc_GetColor_ReturnValue_1, FLinearColor CallFunc_GetColor_ReturnValue_2, FLinearColor CallFunc_GetColor_ReturnValue_3);
}

#endif
