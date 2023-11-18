#ifndef UE4SS_SDK_ITM_MisSel_BiomeBase_HPP
#define UE4SS_SDK_ITM_MisSel_BiomeBase_HPP

class UITM_MisSel_BiomeBase_C : public UUserWidget
{

    void RemovePlagueOverlay();
    void AddPlagueOverlay();
    void GetBasePanel(class UCanvasPanel*& Panel);
};

#endif
