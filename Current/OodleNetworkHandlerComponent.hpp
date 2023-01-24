#ifndef UE4SS_SDK_OodleNetworkHandlerComponent_HPP
#define UE4SS_SDK_OodleNetworkHandlerComponent_HPP

#include "OodleNetworkHandlerComponent_enums.hpp"

class UOodleNetworkTrainerCommandlet : public UCommandlet
{
    bool bCompressionTest;
    int32 HashTableSize;
    int32 DictionarySize;
    int32 DictionaryTrials;
    int32 TrialRandomness;
    int32 TrialGenerations;
    bool bNoTrials;

};

#endif
