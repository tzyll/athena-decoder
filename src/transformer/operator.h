// Copyright (C) 2019 ATHENA DECODER AUTHORS; Xiangang Li; Yang Han; Long Yuan
// All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// ==============================================================================

#ifndef InfHandle_H
#define InfHandle_H

#include "encoder.h"
#include "decoder.h"


struct InfHandle{
    Encoder* enc_handle;
    Decoder* dec_handle;

    ~InfHandle(){
        if(NULL!=enc_handle){
            delete enc_handle;
            enc_handle=NULL;
        }
        if(NULL!=dec_handle){
            delete dec_handle;
            dec_handle=NULL;
        }
    }
};


#endif
