#ifndef UE4SS_SDK_NiagaraCore_HPP
#define UE4SS_SDK_NiagaraCore_HPP

struct FNiagaraCompileHash
{
    TArray<uint8> DataHash;

};

class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
};

class UNiagaraMergeable : public UObject
{
};

#endif
